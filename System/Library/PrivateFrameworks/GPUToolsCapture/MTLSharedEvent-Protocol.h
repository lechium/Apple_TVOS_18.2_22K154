//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLEvent-Protocol.h>

@class MTLSharedEventHandle, MTLSharedEventListener;

@protocol MTLSharedEvent <MTLEvent>
@property unsigned long long signaledValue;
- (_Bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;
- (MTLSharedEventHandle *)newSharedEventHandle;
- (void)notifyListener:(MTLSharedEventListener *)arg1 atValue:(unsigned long long)arg2 block:(void (^)(id <MTLSharedEvent>, unsigned long long))arg3;
@end

