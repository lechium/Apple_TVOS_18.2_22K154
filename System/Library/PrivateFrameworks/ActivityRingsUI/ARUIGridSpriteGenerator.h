//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ARUIGridSpriteGenerator : NSObject
{
    unsigned long long _spriteCount;	// 8 = 0x8
    unsigned long long _framesPerSprite;	// 16 = 0x10
    unsigned long long _columnsPerSprite;	// 24 = 0x18
    unsigned long long _rowsPerSprite;	// 32 = 0x20
}

+ (id)generatorWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4;	// IMP=0x0060000000004be4
- (id)generateSprites;	// IMP=0x0000000000004dcb
- (id)spriteAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000004d41
- (MISSING_TYPE *)originForSpriteAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000004ceb
- (MISSING_TYPE *)frameSize;	// IMP=0x0000000000004c91
- (id)initWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4;	// IMP=0x0000000000004c33

@end

