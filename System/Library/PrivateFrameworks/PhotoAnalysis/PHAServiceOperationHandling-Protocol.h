//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSXPCConnection, PHAServiceCancelableOperation;

@protocol PHAServiceOperationHandling <NSObject>
- (_Bool)validateOperation:(PHAServiceCancelableOperation *)arg1 forConnection:(NSXPCConnection *)arg2;
- (void)handleOperation:(PHAServiceCancelableOperation *)arg1;
@end

