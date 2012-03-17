:: run at command line: copy_part5 .
copy /Y %1"\Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll" %1"\Debug"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll" %1"\Interop101Part5_CLRClient\bin\Debug"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll" %1"\Interop101Part5_CLRClient\obj\x86\Debug"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll" %1"\Interop101Part5_CLRClient\bin\Debug"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll" %1"\Interop101Part5_CLRClient\obj\x86\Debug"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Release\HelloWorldPart5.dll" %1"\Release"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Release\HelloWorldPart5.dll" %1"\Interop101Part5_CLRClient\bin\Release"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Release\HelloWorldPart5.dll" %1"\Interop101Part5_CLRClient\obj\x86\Release"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Release\HelloWorldPart5.dll" %1"\Interop101Part5_CLRClient\bin\Release"
copy /Y %1"\Interop101Part5_CLRDLL\bin\Release\HelloWorldPart5.dll" %1"\Interop101Part5_CLRClient\obj\x86\Release"

:: Project: Interop101Part5_CLRDLL
:: Item: HelloWorldPart5.dll
:: Post Build: call "$(SolutionDir)copy_part5.cmd" "$(SolutionDir)/"