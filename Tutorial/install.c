/*

1. vscode 다중 언어 환경
① Visual Studio Code 다운로드 후  설치 ( 어떠한 컴파일러도 설치 되지 않으며 툴만 설치 되는 것임 )
     https://code.visualstudio.com/ 

②  gcc/g++ 컴파일러 설치
    C언어 또는 CPP작성을 위해,   가장 많이 사용되는 gcc/g++ 컴파일러를 윈도우에서 사용할 수 있게 해주는 툴인 Mingw-w64를  설치함.
    다운로드 ( https://sourceforge.net/projects/mingw/ )

③ 윈도우의 시스템 환경변수 path 부분에 조금전 설치한 MinGW의 경로를 추가해 줌 (중요!)
     윈도우 시작메뉴 검색창 →  '시스템 환경 변수 편집' 검색 → '고급' 탭 클릭!  →  '환경 변수(N)' 클릭! → '시스템 변수(S)' 항목에 있는 'PATH'  선택 →  '편집(I)' 클릭!  → 설치한 경로 추가 : C\MinGW\bin 
   → 경로(PATH) 추가 후 재부팅~!

④  Visual Studio code에 확장 프로그램설치  (C /C++ 언어 코딩을 어시스트해줄 확장 프로그램이며, 컴파일러가 아님!  C/C++컴파일러는 MingGW를 이용함. 따라서 다른 언어가 필요하다면 해당 컴파일러를 별도로 설치해야함.)
     Extension 마켓에서  " C/C++ for Visual Studio Code " 검색 후 설치 

⑤  언어별 폴더 만들고 열기

   C/C++ 언어, Python 등 작업하고자 하는 언어별로  작업폴더를 만들고,   VScode의  파일메뉴 - 오픈 폴더(폴더열기)를 한다,   예,  C언어를 작업하고 싶다면,  C-Lang 폴더를 오픈 폴더로 열고, 거기서 hello.c 파일을 만들고 저장한다. 

⑥ 맨 처음,  다음의 세개의 설정 파일 생성해야 함

    1. tasks.json (build instructions)  : 빌드(실행) 관련 지시 사항 설정 파일
        메뉴>Terminal > Configure Default Build Task.  선택  ,   디폴트 내용을 지우고,  링크해드리는 tasks.json 파일 내용을 복붙복 함 ( https://rasino.tistory.com/337  게시글 중간에 있음) 
        그리고 편리하게 사용자 단축키(키보드 숏컷) 등록하여  컴파일&빌드 : Ctrl+Alt+C  ,   실행 : Ctrl+Alt+R 키를 사용하도록 하면 편함.  위 게시글에 해당 내용 있음( keybinding.json )

    2. launch.json (debugger settings) : 디버거 설정 (디버거는 VScode에 메뉴만 있을 뿐 마켓플레이스에서 디버거를 검색, 선택해서 설치해야 작동함)
       많이 사용되는 디버거로는 코드러너 (Code Runner)가 있으며, 마켓플레이스에서 검색 후 설치함.
       설치 후, Run and Debug (F5) 를 눌러,  화면 상단 가운데 나타나는 메뉴   C++ (GDB/LLDB)  와  C++(Windows)  중에서,   반드시  C++ (GDB/LLDB)를 선택할 것!!!

       곧이어,   gcc.exe - 활성 파일 빌드 및 디버그 (컴파일러: C:\MinGW\bin\gcc.exe )  를 선택할 것!


    3. c_cpp_properties.json (compiler path and IntelliSense settings) : 컴파일러 경로 설정 파일
        메뉴 > 보기 > 명령팔레트,   또는  F1키 누름   >>   C/C++  Edit Configulations (JSON)  선택함!   

  ⑦  파일 메뉴 > Save Workspace as ...   워크스페이스 저장하기를  눌러 C언어 코딩을 위한 작업 환경을 저장하고,   다음에 C언어를 작업하고자 할 때,  여기서 저장한 워크스페이스 파일을 열면 됨.

  <<<   여기까지가 기본적으로 생성 해야할 파일은 생성된 것이며,   C언어를 예시로 작업된 것이고,   파이썬 언어에 대해 추가로  마켓플레이스에서 파이썬 모듈을 검색하고 설치,   파이썬 인터프리터를  python.org 사이트에서 다운로드 받아 설치,    그리고  파이썬 워크스페이스 파일로 저장함.   (파이썬용 tasks.json 파일 역시 게시물 참조하여 생성 :  https://rasino.tistory.com/337 ) 

    ⑧  기타,  한글 깨짐,  디버깅 사용법, 터미널 창으로 결과 출력 바꾸기,  vscode 익스텐션 툴 (유용한 확장 툴) 설치 등은 영상을 참고하세요.
출처 : https://youtu.be/ii097ORUJ_A
https://rasino.tistory.com/337


2. 디버깅 오류 관련
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "g++.exe - 활성 파일 빌드 및 디버그",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "miDebuggerPath": "D:\\Program\\MinGW\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "gdb에 자동 서식 지정 사용",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "C/C++: g++.exe 활성 파일 빌드"
        }
    ]
}
이 내용 launch.json에 복붙하고 miDebuggerPath만 올바르게 수정하면 된다
필요할 시 program, cwd 경로도 수정
출처 : https://jhnyang.tistory.com/430


3. [Git 경고 메세지] LF will be replaced by CRLF in 
git config --global core.autocrlf true
명령어 켜주기
출처 : https://cocoon1787.tistory.com/728


3. mingw64 (mingw-w64) 설치 exe 오류날 때
소스포지에서 x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z 다운
압축해제하고 나온 mingw64 폴더를 C:에 바로 복붙
환경 변수 설정에서 경로 추가에 C:\mingw64, C:\mingw64\bin 추가
gcc -v, g++ -v로 설치 확인
출처 : https://youtu.be/Zcy981HhGw0


4. WSL ubuntu 환경 구축
일단 Linux 설치, vscode wsl extension 설치, vscode wsl c/c++ extension 등 설치, WSL c/c++ compiler 설치까지는 해놨음
출처 : https://webnautes.tistory.com/1158
*/