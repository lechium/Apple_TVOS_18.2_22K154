//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCMediaPlatform, NSArray;

@interface ASCTrailers : NSObject
{
    NSArray *_videos;	// 8 = 0x8
    ASCMediaPlatform *_mediaPlatform;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000025d22
- (void).cxx_destruct;	// IMP=0x00200000000262f8
@property(readonly, copy, nonatomic) ASCMediaPlatform *mediaPlatform; // @synthesize mediaPlatform=_mediaPlatform;
@property(readonly, copy, nonatomic) NSArray *videos; // @synthesize videos=_videos;
- (id)description;	// IMP=0x0010000000026208
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000026065
- (unsigned long long)hash;	// IMP=0x0010000000025fb3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000025fa8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000025efa
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025d2a
- (id)initWithVideos:(id)arg1 mediaPlatform:(id)arg2;	// IMP=0x0010000000025c5d

@end

