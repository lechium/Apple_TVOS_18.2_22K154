//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNQuickFaceTimeAction
{
    _Bool _audioOnly;	// 120 = 0x78
}

+ (id)defaultFaceTimeAudioTitle;	// IMP=0x0060000000019230
+ (id)defaultFaceTimeTitle;	// IMP=0x00600000000191d2
@property(nonatomic) _Bool audioOnly; // @synthesize audioOnly=_audioOnly;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000194bb
- (unsigned long long)score;	// IMP=0x0000000000019488
- (id)subtitleForContext:(long long)arg1;	// IMP=0x00000000000193b0
- (id)titleForContext:(long long)arg1;	// IMP=0x00000000000192e6
- (id)category;	// IMP=0x00000000000192b8
- (id)identifier;	// IMP=0x000000000001928e

@end

