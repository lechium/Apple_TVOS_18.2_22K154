//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSupport/NSObject-Protocol.h>

@class NSError, _PASSqliteDatabase;

@protocol _PASSqliteErrorHandlerProtocol <NSObject>
- (_Bool)handleSqliteError:(int)arg1 error:(NSError *)arg2 onError:(struct _PASDBIterAction_ (^)(NSError *))arg3 db:(_PASSqliteDatabase *)arg4;
@end

