//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HKXMLExtractorSpecification : NSObject
{
    NSString *_specificationString;	// 8 = 0x8
    NSArray *_specificationElements;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000220777
@property(readonly, copy) NSArray *specificationElements; // @synthesize specificationElements=_specificationElements;
@property(readonly, copy) NSString *specificationString; // @synthesize specificationString=_specificationString;
- (_Bool)matchesElementStack:(id)arg1;	// IMP=0x0000000000220646
- (id)initWithSpecificationString:(id)arg1;	// IMP=0x00000000002203c2

@end

