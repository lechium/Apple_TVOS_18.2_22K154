//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BoardServices/NSObject-Protocol.h>

@class BSXPCServiceConnection;

@protocol BSXPCServiceConnectionParent <NSObject>
@property(readonly, nonatomic, getter=_isClientInvalidated) _Bool _clientInvalidated;
@property(readonly, nonatomic, getter=_isInvalidated) _Bool _invalidated;
- (void)_invalidateChildConnection:(BSXPCServiceConnection *)arg1;
@end

