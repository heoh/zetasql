
global.Module = {
  preRun: [],
  postRun: [],
  print: function(text) { console.log('stdout:', text); },
  printErr: function(text) { console.error('stderr:', text); },
  onRuntimeInitialized: function() {
    console.log('Runtime initialized');
  }
};

// Hook into FS if possible. 
// Since FS is not exported, we can't easily access it unless we modify the JS or use a build that exports it.
// But we can try to use the 'preRun' to inject a function that will be called when FS is ready?
// Actually, 'preRun' runs before main().

global.Module.preRun.push(function() {
  console.log('Checking FS...');
  try {
    // FS is available in the scope where preRun functions are executed if they are defined inside the module?
    // No, they are defined here.
    // But the generated code calls them: `addOnPreRun(Module["preRun"].shift())` -> `callRuntimeCallbacks(onPreRuns)`.
    
    // If I can't access FS, I can't check.
    // But I can try to rely on the fact that if the file is missing, it should have failed earlier or later.
  } catch (e) {
    console.error(e);
  }
});

require('./execute_query_wasi.js');
