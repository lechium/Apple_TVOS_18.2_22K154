//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlayerRequest;
@protocol MusicKit_SoftLinking_MPCPlayerPath;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPCPlayerRequest : NSObject
{
    MPCPlayerRequest *_underlyingPlayerRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000056ec
- (id)_errorFromUnderlyingError:(id)arg1;	// IMP=0x000000000000557d
- (void)performWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005415
@property(readonly, nonatomic) MPCPlayerRequest *_underlyingPlayerRequest;
@property(retain, nonatomic) id <MusicKit_SoftLinking_MPCPlayerPath> playerPath;
@property(nonatomic) long long historyCount;
@property(nonatomic) long long forwardCount;
- (id)initWithUnderlyingPlayerRequest:(id)arg1;	// IMP=0x00000000000052be
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000050ad

@end

