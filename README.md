# | oss 기말 프로젝트

<p> 저장소 : https://github.com/rkdckdfhr/2026oss</p>

| 팀원(역할) | 업무 |
| --- | --- |
| 강창록(팀장 – 202507021) | main 브랜치와 README.md 수정 |
| 정진관(팀원 – 202507020) | dev/a 브랜치 수정 |
| 박성현(팀원 – 202507006) | dev/b 브랜치 수정 |
| 장주혁(팀원 – 202507019) | dev/c 브랜치 수정 |


---
### 문제해결 방법과 순서
---
1. main 브렌치와 dev/a 브렌치 병합 중 충돌 발생
2. 충돌 발생한 dev/a의 내용을 수정 후 병합 완료
3. main 브렌치와 dev/b 브렌치 병합 중 충돌 발생
4. 충돌 발생한 dev/b의 내용을 수정 후 병합 완료
5. main 브렌치와 dev/c 브렌치 병합 중 충돌 발생
6. 충돌 발생한 dev/c의 내용을 수정 후 병합 완료
7. main 브렌치에서 최종 코드 확인 후 수정
8. 최종 결과 화면 캡쳐와 실행 화면 캡쳐
9. README.md 수정

## 중간과정 스크린샷

1. main 브렌치에서 calc.cpp 코드 수정
![스크린샷](images/main_calc-cpp수정02.png)

2. dev/a add.cpp, sub.cpp 코드 수정
![스크린샷](images/dev_a_add_cpp_수정01.png)
![스크린샷](images/dev_a_sub_cpp_수정02.png)

3. main 브렌치와 dev/a 병합 중 충돌 발생 내용
![스크린샷](images/main_devA병합충돌05.png)
![스크린샷](images/main_devA충돌calc내용06.png)

4. dev/a 병합 완료
![스크린샷](images/main_병합수정후커밋09.png)


5. dev/b mul.cpp mod.cpp 코드 수정 
![스크린샷](images/dev_b-mul_cpp수정01.png)
![스크린샷](images/dev_b-mod_cpp수정02.png)

6. main 브렌치와 dev/b 병합 중 충돌 발생 내용
![스크린샷](images/main_devBmerge충돌10.png)
![스크린샷](images/main_devB충돌수정12.png)

7. dev/b 병합 완료
![스크린샷](images/main_devB수정후커밋13.png)

8. dev/c dive.cpp 코드 수정
![스크린샷](images/1.%20dive.cpp%20수정(dev_c).png)

9. main 브렌치와 dev/c 병합 중 충돌 발생 내용
![스크린샷](images/main_devC병합충돌14.png)
![스크린샷](images/main_devC충돌내용15.png)

10. dev/c 병합 완료
![스크린샷](images/main_devC병합수정후커밋16.png)

11. main 브렌치에서 최종 코드 수정
![스크린샷](images/18main_최종코드수정.png)

## git flow : 결과 화면
![gitflow](images/main_gitflow.png)

## 프로그램 실행 결과 화면
![실행결과](images/17main_최종빌드.png)