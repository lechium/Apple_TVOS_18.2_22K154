//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSUUID, XCTScreenRecordingRequest;

__attribute__((visibility("hidden")))
@interface XCTDScreenRecordingProvider : NSObject
{
    MISSING_TYPE *state;	// 0 = 0x0
}

+ (void)addIDESession:(id)arg1;	// IMP=0x0020000000075050
+ (void)provideCapabilitiesToBuilder:(id)arg1;	// IMP=0x0010000000074c10
- (void).cxx_destruct;	// IMP=0x000000000007f740
- (id)init;	// IMP=0x001000000007f6e0
- (void)stopScreenRecordingWithUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;	// IMP=0x001000000007f0c0
- (void)startScreenRecordingWithRequest:(XCTScreenRecordingRequest *)arg1 completion:(void (^)(XCTAttachmentFutureMetadata *, NSError *))arg2;	// IMP=0x001000000007a410

@end

