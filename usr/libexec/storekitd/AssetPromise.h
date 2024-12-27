//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSLazyPromise.h>

@class NSUUID;

@interface AssetPromise : AMSLazyPromise
{
    CDUnknownBlockType _progress;	// 8 = 0x8
    NSUUID *_requestID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000736e3
@property(readonly) NSUUID *requestID; // @synthesize requestID=_requestID;
@property(copy) CDUnknownBlockType progress; // @synthesize progress=_progress;
- (id)initWithRequestID:(id)arg1 promiseBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000007362e

@end

