# Phase 1.1: Foundations of Clean Code

Welcome to Phase 1 of the Masterclass. Before diving into complex architectural patterns, we must master basic code hygiene. Bad hygiene breaks great architecture.

## The Big Three

1. **KISS (Keep It Simple, Stupid):** Code should be as simple as possible. Do not introduce abstractions (interfaces, managers, factories) unless there is a tangible, immediate need. Over-engineering is penalized in interviews.
2. **DRY (Don't Repeat Yourself):** Every piece of knowledge must have a single authoritative representation. However, beware of *premature abstraction*—wait until logic is duplicated at least three times before extracting it to avoid tying unrelated concepts together.
3. **YAGNI (You Ain't Gonna Need It):** Never implement functionality "just in case." If a requirement isn't explicitly stated, do not build it. 

### Why this matters in LLD
In a 45-minute interview, building unnecessary layers (YAGNI violations) drains your time. Writing complex, unreadable code (KISS violations) makes it impossible for the interviewer to follow your logic. Repeating yourself (DRY violations) makes fixing bugs during the interview a nightmare.
