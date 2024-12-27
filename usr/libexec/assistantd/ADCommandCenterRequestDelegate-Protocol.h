//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AceObject, NSError, NSString;
@protocol AFBluetoothDevice, SAAceCommand;

@protocol ADCommandCenterRequestDelegate <NSObject>
- (void)adRequestEncounteredIntermediateError:(NSError *)arg1;
- (void)adRequestDidCompleteWithSuccess:(_Bool)arg1 error:(NSError *)arg2;
- (void)adRequestDidReceiveCommand:(AceObject<SAAceCommand> *)arg1 reply:(void (^)(AceObject<SAAceCommand> *, NSError *))arg2;

@optional
- (void)adRequestDidReceiveTimeoutExtensionRequestWithDuration:(double)arg1;
- (id <AFBluetoothDevice>)currentBluetoothDevice;
- (void)adRequestDidUpdateResponseMode:(NSString *)arg1;
- (void)adRequestWillReceiveCommand:(AceObject<SAAceCommand> *)arg1;
@end

