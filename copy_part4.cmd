:: run at command line: copy_part4 .
copy /Y %1"\Debug\Interop101Part4_CPPCLI.dll" %1"\Interop101Part4_Client\bin\Debug"
copy /Y %1"\Debug\Interop101Part4_CPPCLI.dll" %1"\Interop101Part4_Client\obj\x86\Debug"
copy /Y %1"\Debug\HelloWorldPart4.dll" %1"\Interop101Part4_Client\bin\Debug"
copy /Y %1"\Debug\HelloWorldPart4.dll" %1"\Interop101Part4_Client\obj\x86\Debug"
copy /Y %1"\Release\Interop101Part4_CPPCLI.dll" %1"\Interop101Part4_Client\bin\Release"
copy /Y %1"\Release\Interop101Part4_CPPCLI.dll" %1"\Interop101Part4_Client\obj\x86\Release"
copy /Y %1"\Release\HelloWorldPart4.dll" %1"\Interop101Part4_Client\bin\Release"
copy /Y %1"\Release\HelloWorldPart4.dll" %1"\Interop101Part4_Client\obj\x86\Release"

:: Project: Interop101Part4_CLRClient
:: Item 1: Interop101Part4_CPPCLI.dll
:: Item 2: HelloWorldPart4.dll
:: Post Build: call "$(SolutionDir)copy_part4.cmd" "$(SolutionDir)/"