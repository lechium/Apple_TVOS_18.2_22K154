//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SRRawPayload : NSObject
{
    MISSING_TYPE *data;	// 8 = 0x8
    MISSING_TYPE *dataVersion;	// 24 = 0x18
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0020000000102bd2
- (void).cxx_destruct;	// IMP=0x0040000000102ea5
- (id)init;	// IMP=0x0010000000102e6f
- (id)serialize;	// IMP=0x0010000000102d18
@property(nonatomic, readonly) unsigned int dataVersion; // @synthesize dataVersion;

@end

