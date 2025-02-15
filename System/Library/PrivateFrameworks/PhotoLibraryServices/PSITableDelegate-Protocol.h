//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PSIStatement;

@protocol PSITableDelegate
- (long long)lastInsertedRowID;
- (void)unbindMatchingIds;
- (void)bindMatchingIds:(const long long *)arg1 numberOfMatchingIds:(unsigned long long)arg2;
- (void)bindMatchingIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;
- (void)bindMatchingIds:(struct __CFSet *)arg1;
- (void)unprepareMatchingIds;
- (void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;
- (void)executeStatement:(PSIStatement *)arg1 withResultEnumerationBlock:(void (^)(PSIStatement *, _Bool *))arg2;
- (void)executeStatement:(PSIStatement *)arg1;
- (void)executeStatementFromString:(NSString *)arg1 withResultEnumerationBlock:(void (^)(PSIStatement *, _Bool *))arg2;
- (void)executeStatementFromString:(NSString *)arg1;
- (PSIStatement *)statementFromString:(NSString *)arg1;
@end

