//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface SDAirDropHandlerImportResult : NSObject
{
    NSArray *_importedFiles;	// 8 = 0x8
    NSURL *_openAppURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005cbc
@property(retain, nonatomic) NSURL *openAppURL; // @synthesize openAppURL=_openAppURL;
@property(copy, nonatomic) NSArray *importedFiles; // @synthesize importedFiles=_importedFiles;

@end

