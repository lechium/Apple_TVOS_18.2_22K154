//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriActivation/NSObject-Protocol.h>

@class BSServiceConnection, BSServiceConnectionListener;
@protocol BSServiceConnectionHost, BSXPCDecoding;

@protocol BSServiceConnectionListenerDelegate <NSObject>
- (void)listener:(BSServiceConnectionListener *)arg1 didReceiveConnection:(BSServiceConnection<BSServiceConnectionHost> *)arg2 withContext:(id <BSXPCDecoding>)arg3;
@end

