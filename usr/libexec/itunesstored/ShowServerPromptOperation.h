//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;	// 96 = 0x60
}

- (_Bool)_promptNeedsDisplay;	// IMP=0x002000000009ec07
- (id)_newStoreURLOperation:(id *)arg1;	// IMP=0x001000000009e9f4
- (_Bool)_automaticDownloadsPromptNeedsDisplay;	// IMP=0x001000000009e9a9
- (void)run;	// IMP=0x001000000009e475
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;	// IMP=0x001000000009e415
- (id)initWithPromptIdentifier:(id)arg1;	// IMP=0x001000000009e3b7
- (id)init;	// IMP=0x001000000009e3a3

@end

