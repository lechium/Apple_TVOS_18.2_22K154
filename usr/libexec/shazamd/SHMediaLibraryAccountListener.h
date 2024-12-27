//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHMediaLibraryInfoFetcher;

@interface SHMediaLibraryAccountListener : NSObject
{
    id _notificationObserver;	// 8 = 0x8
    SHMediaLibraryInfoFetcher *_libraryInfoFetcher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000034a20
@property(retain, nonatomic) SHMediaLibraryInfoFetcher *libraryInfoFetcher; // @synthesize libraryInfoFetcher=_libraryInfoFetcher;
@property(retain, nonatomic) id notificationObserver; // @synthesize notificationObserver=_notificationObserver;
- (void)stopListeningForChanges;	// IMP=0x0010000000034973
- (void)listenForChanges;	// IMP=0x001000000003479c
- (id)init;	// IMP=0x0010000000034746
- (void)dealloc;	// IMP=0x00100000000346c9

@end

