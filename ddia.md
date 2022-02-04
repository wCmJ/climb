# 可靠、可扩展和可维护的应用系统
## 数据系统
- 目前大部分系统都是数据密集型系统，而非计算密集型系统
- 单个组件（数据库、队列、高速缓存等）无法满足越来越多的应用系统需求，因而需要将任务分解，每个组件负责高效完成其中一部分，多个组件依靠应用层代码驱动有机衔接起来

### 问题
- 系统内部出现局部失效时，如何确保数据的正确性与完整性？
- 发生系统降级时，该如何为客户提供一致的良好表现？
- 负载增加时，如何扩展？
- 友好的服务API该如何设计？

## 可靠性
- 出现意外情况如硬件、软件故障、人为失误时，系统应可以继续正常运转
- 虽然性能可能有所降低，但确保功能正确

## 可扩展性
- 随着规模的增长，例如数据量、流量或复杂性，系统应以合理的方式来匹配这种增长

## 可维护性
- 随着时间的推移，增加了新人员、新场景等，系统都应搞笑运转

## 负载
- 根据系统特效定义，qps，数据库写入比例，聊天室的同时活动用户数量，缓存命中率等
- 有时平均值很重要，有时系统瓶颈来自于少数峰值

## 性能
- 负载增加，但系统资源保持不变，系统性能发生什么变化？
- 负载增加，保持性能不变，需要增加多少资源？
- 指标：延迟，响应时间，






