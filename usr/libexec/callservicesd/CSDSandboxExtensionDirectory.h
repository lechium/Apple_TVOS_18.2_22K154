//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString, NSURL;

@interface CSDSandboxExtensionDirectory : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e00ac
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)urlForFilename:(id)arg1;	// IMP=0x00100000000dffd5
- (_Bool)removeLinksForFilenamesNotInArray:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000df959
- (id)createLinkIfNecessaryWithFilename:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000df667
@property(readonly, copy, nonatomic) NSString *name;
- (id)init;	// IMP=0x00100000000df58d
- (id)initWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000df509
- (id)initWithName:(id)arg1 fileManager:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000df346

@end

