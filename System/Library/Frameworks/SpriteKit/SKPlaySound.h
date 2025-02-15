//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSString, SKSoundSource;

__attribute__((visibility("hidden")))
@interface SKPlaySound : SKAction
{
    NSString *_filePath;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    struct SKCPlaySound *_mycaction;	// 24 = 0x18
    struct CGPoint _position;	// 32 = 0x20
    SKSoundSource *_soundSource;	// 48 = 0x30
}

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;	// IMP=0x0060000000025b1b
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(_Bool)arg3;	// IMP=0x0060000000025681
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000250e4
- (void).cxx_destruct;	// IMP=0x0000000000025c88
- (id)reversedAction;	// IMP=0x0000000000025c6e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002592c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000255ad
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000251e0
- (id)init;	// IMP=0x00000000000250ec

@end

