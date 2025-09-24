# 자율주행 로봇 개발 로드맵 (6주 완성)

## 프로젝트 개요
6주 동안 순찰 로봇 시스템을 구현하며 자율주행 로봇 개발자로 성장하는 로드맵

**최종 목표**: 실제 환경에서 동작하는 자율 순찰 로봇 + 강화학습 적용

## 진행 상황 체크리스트

### 전체 진행도
- [ ] Week 1: ROS2 기초 및 통신 시스템 구축
- [ ] Week 2: SLAM 구현 및 맵핑 완성  
- [ ] Week 3: 경로 계획 알고리즘 구현
- [ ] Week 4: 자율 순찰 시스템 통합
- [ ] Week 5: 인식 시스템 및 강화학습 도전
- [ ] Week 6: 최종 통합 및 포트폴리오 완성

### 기술적 성취도
- [ ] ROS2 노드 통신 완전 이해
- [ ] tf2 좌표 변환 숙련
- [ ] SLAM으로 정확한 맵 생성
- [ ] A*, RRT 알고리즘 직접 구현
- [ ] 실시간 장애물 회피 시스템
- [ ] YOLO 기반 객체 인식 통합
- [ ] 강화학습 기본 구현 (도전 목표)

## 학습 전략 및 방법론

### 효율적 학습 방법
```
1. 시작시 개념 정리: Day 시작 → 30분 개념 훑어보기 → 막히면 이론 더 공부 → 이해되면 바로 실습
2. 매일 밤 12시 15분 회고: 오늘 배운 것, 내일 할 것
3. 막힐 때 규칙: 30분 고민 → AI 질문 → 15분 더 시도 → 다른 방법 검토
```

### 시간 배분 원칙
- **오후 5시간 (실습장)**: 실제 로봇 테스트 위주
- **저녁 5시간 (집/카페)**: 이론 학습 및 코드 작성
- **위험 관리**: Week 5 강화학습은 하루 2시간만 투자, 실패 시 즉시 복귀

### AI 도구 활용 전략
- **Gemini**: 영어 문서 번역 및 개념 정리
- **Claude**: 에러 디버깅 및 코드 리뷰
- **30분 규칙**: 혼자 고민 → AI 질문 → 재시도

---

## 주차별 상세 계획

### Week 1-2: ROS2 및 SLAM 시스템 구축

**학습 목표**
- ROS2 핵심 개념을 완전히 이해하고 실제 로봇에 적용
- 2D LiDAR + Depth 카메라를 활용한 고품질 맵 생성

**기술 스택**
- ROS2 Humble
- Navigation2 Stack
- SLAM Toolbox / Cartographer
- tf2 Transformation

**주요 활동**
- Publisher/Subscriber, Service/Client, Action 시스템 구현
- Launch 파일 작성 및 Parameter 관리
- tf2를 활용한 로봇 좌표계 변환 시스템
- 멀티 센서 융합 매핑 시스템 구축

**완료 기준**
- [ ] 실습장 전체 구역 맵핑 완성도 90% 이상
- [ ] tf2 좌표 변환을 타인에게 설명 가능한 수준
- [ ] GitHub에 단계별 진행 코드 및 문서 업로드 완료

---

### Week 3-4: 경로 계획 및 자율 순찰 시스템

**학습 목표**
- 주요 경로 계획 알고리즘을 직접 구현하여 동작 원리 완전 이해
- Waypoint 기반 자율 순찰 시스템 완성

**기술 스택**
- A* Algorithm
- RRT (Rapidly-exploring Random Tree)
- DWA (Dynamic Window Approach)
- Navigation2 Path Planners

**주요 활동**
- Global Path Planning: A*, Dijkstra 직접 구현
- Local Path Planning: DWA 기반 실시간 장애물 회피
- Multi-waypoint 순찰 시스템 구축
- 다양한 환경에서의 안전성 테스트

**완료 기준**
- [ ] A*, RRT 알고리즘 완전 이해 및 설명 가능
- [ ] 실제 로봇이 복잡한 경로를 안전하게 주행
- [ ] 30분 이상 무인 자율 순찰 성공

---

### Week 5-6: 인식 시스템 및 강화학습 도전

**학습 목표 (우선순위별)**
1. **필수**: YOLO 기반 사람 감지를 순찰 로봇에 통합
2. **도전**: Isaac Sim에서 강화학습 기본 구현
3. **심화**: 실제 로봇에 강화학습 적용 시도

**기술 스택**
- YOLOv8
- PyTorch
- Isaac Sim
- PPO (Proximal Policy Optimization)

**주요 활동**
- YOLO 모델을 ROS2 환경에 통합
- 실시간 침입자 감지 및 알림 시스템
- Isaac Sim 환경에서 강화학습 실험
- Sim-to-Real Transfer 시도

**완료 기준**
- [ ] YOLO 기반 침입자 감지 시스템 100% 동작
- [ ] 강화학습 기본 구현 (성공 시 보너스)
- [ ] 통합 시연 데모 완성

---

### Week 7-8: 시스템 통합 및 포트폴리오

**최종 목표**
- 모든 시스템이 통합된 완전한 순찰 로봇
- 전문적인 포트폴리오 및 데모 영상 제작

**주요 활동**
- 전체 시스템 통합 및 안정성 테스트
- 코드 리팩토링 및 문서화
- 3분 데모 영상 제작
- 기술 면접 준비 및 발표 연습

**완료 기준**
- [ ] 30분 이상 완전 자율 운영
- [ ] GitHub 포트폴리오 전문적 완성
- [ ] 기술적 챌린지 해결 과정 문서화

---

## 폴더 구조 및 관리 방법

```
robot_projects/
├── README.md                          # 메인 로드맵 (이 문서)
├── docs/                              # 문서 및 회고
│   ├── daily_logs/                    # 일일 회고
│   │   ├── week1/
│   │   │   ├── day1_reflection.md
│   │   │   ├── day2_reflection.md
│   │   │   └── ...
│   │   ├── week2/
│   │   └── ...
│   ├── weekly_summary/                # 주간 정리
│   │   ├── week1_summary.md
│   │   ├── week2_summary.md
│   │   └── ...
│   └── technical_notes/               # 기술 노트
│       ├── ros2_concepts.md
│       ├── slam_implementation.md
│       └── ...
├── week1_ros2_basics/                 # Week 1 코드
│   ├── src/
│   │   ├── simple_publisher/
│   │   ├── simple_subscriber/
│   │   └── tf2_examples/
│   ├── launch/
│   ├── config/
│   └── README.md
├── week2_slam/                        # Week 2 코드
│   ├── src/
│   ├── maps/                          # 생성된 맵 파일
│   ├── config/
│   └── README.md
├── week3_path_planning/               # Week 3 코드
│   ├── src/
│   │   ├── a_star/
│   │   ├── rrt/
│   │   └── dwa/
│   └── README.md
├── week4_navigation/                  # Week 4 코드
├── week5_perception_rl/               # Week 5 코드
│   ├── yolo_integration/
│   ├── isaac_sim_rl/
│   └── README.md
├── week6_integration/                 # Week 6 통합 시스템
├── assets/                            # 미디어 파일
│   ├── images/                        # 스크린샷, 다이어그램
│   ├── videos/                        # 데모 영상
│   └── presentations/                 # 발표 자료
└── scripts/                           # 유틸리티 스크립트
    ├── setup_environment.sh
    ├── run_tests.sh
    └── build_all.sh
```


## GitHub 커밋 규칙

### 일관된 커밋 메시지
```bash
# 형식: [WeekX-DayY] 카테고리: 구체적 내용

# 예시들
git commit -m "[Week1-Day3] ROS2: tf2 coordinate transformation implementation"
git commit -m "[Week2-Day5] SLAM: multi-sensor fusion mapping complete"
git commit -m "[Week3-Day2] PathPlanning: A* algorithm optimization"
git commit -m "[Week5-Day4] RL: PPO waypoint navigation first success"
git commit -m "[Docs] Daily reflection Week2-Day3 updated"
git commit -m "[Assets] Demo video Week4 navigation uploaded"
```
