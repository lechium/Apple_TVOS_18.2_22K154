//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSScanner.h>

@interface NSScanner (NUPatternAdditions)
- (id)substringFromScanLocation;	// IMP=0x00900000000731f7
- (_Bool)scanRepeatPattern:(inout id *)arg1 error:(out id *)arg2;	// IMP=0x0090000000072a86
- (_Bool)scanPatterns:(out id *)arg1 from:(id)arg2 to:(id)arg3 delimiter:(id)arg4 error:(out id *)arg5;	// IMP=0x0090000000072136
- (_Bool)scanChoicePattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x0090000000071b1f
- (_Bool)scanGroupPattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x0090000000071508
- (_Bool)scanListPattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x0090000000070ef1
- (_Bool)scanTokenPattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x009000000007095f
- (_Bool)scanPattern:(out id *)arg1 error:(out id *)arg2;	// IMP=0x009000000007030c
@end

