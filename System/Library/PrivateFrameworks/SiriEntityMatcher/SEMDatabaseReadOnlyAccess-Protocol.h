//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriEntityMatcher/NSObject-Protocol.h>

@class SEMDatabaseSelect;

@protocol SEMDatabaseReadOnlyAccess <NSObject>
- (_Bool)enumerateRowResultsOfSelect:(SEMDatabaseSelect *)arg1 batchSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 enumerateAll:(_Bool)arg4 error:(id *)arg5 usingBlock:(_Bool (^)(SEMDatabaseValueRow *, id *, _Bool *))arg6;
- (_Bool)enumerateRowResultsOfSelect:(SEMDatabaseSelect *)arg1 error:(id *)arg2 usingBlock:(_Bool (^)(SEMDatabaseValueRow *, id *, _Bool *))arg3;
- (_Bool)enumerateRecordResultsOfSelect:(SEMDatabaseSelect *)arg1 recordClass:(Class)arg2 batchSize:(unsigned long long)arg3 offset:(unsigned long long)arg4 enumerateAll:(_Bool)arg5 error:(id *)arg6 usingBlock:(_Bool (^)(NSObject<SEMDatabaseRecord> *, id *, _Bool *))arg7;
- (_Bool)enumerateRecordResultsOfSelect:(SEMDatabaseSelect *)arg1 recordClass:(Class)arg2 error:(id *)arg3 usingBlock:(_Bool (^)(NSObject<SEMDatabaseRecord> *, id *, _Bool *))arg4;
@end

