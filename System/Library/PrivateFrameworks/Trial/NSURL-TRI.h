//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (TRI)
+ (id)triContainerURLWithPath:(id)arg1 containerId:(id)arg2 containerType:(long long)arg3;	// IMP=0x008000000005a5c7
+ (id)triParseURLFromString:(id)arg1;	// IMP=0x0080000000059dc7
+ (id)triParseURLFromString:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x0080000000059ce2
- (id)triURLByResolvingSymlinksInPathIncludingPrivate;	// IMP=0x001000000005a6d3
- (_Bool)triIsContainerURL;	// IMP=0x001000000005a544
- (id)triPathAsOwner:(_Bool)arg1;	// IMP=0x001000000005a1dd
- (_Bool)triIsEqual:(id)arg1;	// IMP=0x001000000005a0f2
- (id)triSaveURLToString;	// IMP=0x0010000000059ddb
@end

