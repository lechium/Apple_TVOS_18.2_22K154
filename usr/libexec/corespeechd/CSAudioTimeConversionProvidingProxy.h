//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSAudioTimeConversionProvidingProxy : NSObject
{
}

- (void)_handleXPCTimeConvertProvidingTypeSampleCountFromHostTimeMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 streamHandleId:(unsigned long long)arg4;	// IMP=0x00400000000b1f0e
- (void)_handleXPCTimeConvertProvidingTypeHostTimeFromSampleCountMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 streamHandleId:(unsigned long long)arg4;	// IMP=0x00100000000b1d79
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 audioStreamHandleId:(unsigned long long)arg4;	// IMP=0x00100000000b1c49

@end

