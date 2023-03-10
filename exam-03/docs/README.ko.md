# 소개

시험 시스템은 과제를 하나씩 제공하며 요청시 필요할 때 채점합니다.
시험은 일련의 레벨이며 각 레벨에는 무작위로 부여되는 가능한 과제 풀이 있습니다. 당신의 이웃은 아마 당신과 같지 않을 것입니다. 인생은 불공평합니다.

## 시험 전에

시험을 시작하기 전에 인트라넷에서 하나 이상의 시험 프로젝트를 구독해야합니다 (또는 처음이 아닌 경우 다시 시도). 원하는만큼 구독 할 수 있으며 이에 대한 제한은 없습니다.
적어도 하나의 시험 프로젝트에 가입하면 연습 모드에서만`examshell '을 사용하여 액세스 할 수 있습니다.
실제 시험을보고 싶다면 시험 세션에 가입하고 정시에 세션에 참여한 다음 시험실에서 "시험"으로 로그인해야합니다. 그래야만 실제 모드로 시험을 볼 수 있습니다.

## 시험 모드

두 가지 시험 모드가 있습니다.
* 시험 모드 중 시험실의 "시험"세션에서만 액세스 할 수있는 실제 모드. 이 모드에서는 성적이 인트라넷에서 계산되며 세션을 마치면 성적이 결정됩니다.

## examshell

'examshell'이라는 프로그램을 사용하여 시험 시스템에 접근합니다.
시험 시작 시간으로부터 10 분 전에 터미널에서 직접 시작해야합니다. 실수로 중지해도 문제가되지 않습니다. 터미널에 'examshell'을 입력하여 다시 시작할 수 있습니다. 프로세스를 이전 위치로 다시 시작합니다.
1. 당신은 examshell을 시작
2. Examshell은 액세스 할 수있는 다양한 시험을 알려줍니다.
3. 시험과 시작 레벨을 선택합니다
4. 시스템이 Git 저장소를 생성하고 복제본은 BASEDIR/rendu 에 있습니다.
5. 시스템이 현재 레벨에서 무작위로 과제를 할당합니다.
6. Examshell은 BASEDIR/subjects/ASSIGNMENT_NAME/ 에 과제를 다운로드합니다.
7. Examshell은 당신이 해야 할 과제, 당신이 얻을 수 있는 점수, 그리고 그것을 어디에 위치시켜야하는지 알려줍니다
8. 과제를 작성합니다.
9. 평상시처럼 Git 저장소에서 과제를 push합니다.
10. 완료되었을 경우:`grademe` 명령을 사용하여 examshell에게 채점을 받습니다.
11. 시스템은 과제를 채점합니다
12. Examshell은 trace 를 BASEDIR/traces/ASSIGNMENT_TRACE_DIR 에 저장합니다.
13. 성공하면 점수를 얻고 한 단계 위로 올라갑니다. 그렇지 않으면 시험이 완료됩니다.
14. 당신이 실패하면, 당신은 같은 레벨을 유지합니다. 현재 레벨의 pool에 더 이상 과제가 없으면 시험이 완료됩니다.
