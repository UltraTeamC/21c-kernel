// System(data,path.0) {
//     func(data.1):= {
//         version := 0.11
//         build := 123
//         User := 2
//     };
//     func(path,FileSystem.1) := {
//         System := [a]:User/Kernel/21c-Kernel/System
//         Terminal := [a]:User/Kernel/21c-Kernel/Terminal
//         func(FileSystem,list.2) := {
//             list :=[21c-File]
//         };
//     };
//     func(run.1) := {
//         ISO C := 17
//         Assembly := armv7
//     };
// }
// User(data,path)[0] {
//     func path := {
//         none
//     };
//     func data := {
//         none
//     };
// }
void System(data,path) {
    float version   = 0.11;
    char  build[10] = "0.11.0" 
    void path() {
        char System[] = "[a]:User/Kernel/21c-Kernel/System";
        char Terminal[] = "[a]:User/Kernel/21c-Kernel/Terminal";
    }
}