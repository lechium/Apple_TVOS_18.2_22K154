//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKSoundBuffer : NSObject
{
    unsigned int _bufferId;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

+ (id)bufferWithFileNamed:(id)arg1;	// IMP=0x00600000000b7979
- (void).cxx_destruct;	// IMP=0x00000000000b82a0
- (void)dealloc;	// IMP=0x00000000000b8204
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned int bufferId;
- (id)description;	// IMP=0x00000000000b8160
- (id)init;	// IMP=0x00000000000b791d

@end

