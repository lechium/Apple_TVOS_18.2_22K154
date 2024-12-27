//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaFileType;

__attribute__((visibility("hidden")))
@interface AVMediaFileOutputSettingsValidator : NSObject
{
    AVMediaFileType *_fileType;	// 8 = 0x8
}

+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;	// IMP=0x0010000000138291
+ (void)initialize;	// IMP=0x0010000000138142
- (_Bool)validateVideoOutputSettings:(id)arg1 reason:(id *)arg2;	// IMP=0x000000000013863c
- (_Bool)validateAudioOutputSettings:(id)arg1 reason:(id *)arg2;	// IMP=0x000000000013844a
@property(readonly, nonatomic) AVMediaFileType *fileType;
- (void)dealloc;	// IMP=0x0000000000138405
- (id)initWithFileType:(id)arg1;	// IMP=0x000000000013831b
- (id)init;	// IMP=0x0000000000138307

@end

