//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MADDeferredProcessingEntry : NSObject
{
    NSString *_localIdentifier;	// 8 = 0x8
    NSDate *_requestDate;	// 16 = 0x10
}

+ (id)entryWithLocalIdentifier:(id)arg1 requestDate:(id)arg2;	// IMP=0x004000000005c5aa
- (void).cxx_destruct;	// IMP=0x002000000005c656
@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(retain, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (id)initWithLocalIdentifier:(id)arg1 requestDate:(id)arg2;	// IMP=0x001000000005c511

@end

