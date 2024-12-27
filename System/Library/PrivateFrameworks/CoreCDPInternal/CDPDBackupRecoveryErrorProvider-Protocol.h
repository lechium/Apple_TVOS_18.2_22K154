//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, CDPDevice, NSError;
@protocol CDPStateUIProviderInternal;

@protocol CDPDBackupRecoveryErrorProvider <NSObject>
- (void)handleSoftLimitError:(NSError *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleHardLimitError:(NSError *)arg1 completion:(void (^)(NSError *))arg2;
- (NSError *)recordNotFoundErrorWithUnderlyingError:(NSError *)arg1;
- (NSError *)verficationFailedErrorwithUnderlyingError:(NSError *)arg1;
- (NSError *)hardLimitErrorForRecord:(CDPDevice *)arg1;
- (NSError *)globalHardLimitErrorWithRecord:(CDPDevice *)arg1;
- (NSError *)globalHardLimitError;
- (NSError *)cooldownErrorWithUnderlyingError:(NSError *)arg1;
- (void)setPrevailingSecret:(unsigned long long)arg1;
- (_Bool)supportsErrorPresentation;
- (id)initWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2;
@end

