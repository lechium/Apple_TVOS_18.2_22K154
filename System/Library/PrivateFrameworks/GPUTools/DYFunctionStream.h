//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYFunctionStream : NSObject
{
}

- (void)enumerateFunctionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cdab
- (unsigned long long)readFunctions:(struct Function *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000000cd93
- (const struct Function *)readFunction;	// IMP=0x000000000000cd7b
- (const struct Function *)peekFunction;	// IMP=0x000000000000cd63
- (_Bool)resetToFunction:(const struct Function *)arg1;	// IMP=0x000000000000cd4b
- (void)clearResetMarker;	// IMP=0x000000000000cd36
- (void)setResetMarker;	// IMP=0x000000000000cd21
- (void)reset;	// IMP=0x000000000000cd0c

@end

