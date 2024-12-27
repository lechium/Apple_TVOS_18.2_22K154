//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

@interface SoftwareLibraryUpdateOperation : ISOperation
{
    NSString *_bundleID;	// 96 = 0x60
    NSDictionary *_changeset;	// 104 = 0x68
}

- (void)run;	// IMP=0x002000000018e4a6
@property(readonly) NSDictionary *changeset;
@property(readonly) NSString *bundleIdentifier;
- (void)dealloc;	// IMP=0x001000000018e412
- (id)initWithBundleIdentifier:(id)arg1 changeset:(id)arg2;	// IMP=0x001000000018e38a

@end

