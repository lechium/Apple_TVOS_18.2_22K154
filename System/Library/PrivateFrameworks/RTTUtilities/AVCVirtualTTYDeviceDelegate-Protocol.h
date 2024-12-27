//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RTTUtilities/NSObject-Protocol.h>

@class AVCVirtualTTYDevice, NSError, NSString;

@protocol AVCVirtualTTYDeviceDelegate <NSObject>
- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveText:(NSString *)arg2;
- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)deviceDidStop:(AVCVirtualTTYDevice *)arg1;
- (void)device:(AVCVirtualTTYDevice *)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;
@end

