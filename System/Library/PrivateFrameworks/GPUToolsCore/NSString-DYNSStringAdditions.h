//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (DYNSStringAdditions)
+ (id)dy_timeFormat:(double)arg1 unit:(_Bool)arg2;	// IMP=0x0080000000006ec3
- (id)simplifiedTestFileName:(_Bool *)arg1;	// IMP=0x00100000000074f4
- (id)dy_appendComponentsString:(id)arg1 usingSeparator:(id)arg2 unique:(_Bool)arg3;	// IMP=0x0010000000007475
- (id)dy_appendComponents:(id)arg1 usingSeparator:(id)arg2 unique:(_Bool)arg3;	// IMP=0x00100000000071ea
- (_Bool)dy_versionIsOlderThan:(id)arg1;	// IMP=0x00100000000071cb
- (_Bool)dy_scanBuildPrefix:(id *)arg1 number:(long long *)arg2;	// IMP=0x0010000000007103
- (id)dy_removeWhiteSpaceCharacters;	// IMP=0x0010000000007064
- (long long)dy_numericCompare:(id)arg1;	// IMP=0x001000000000704d
@end

