//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface PushNotificationSoundsSyncOperation : ISOperation
{
}

- (id)_newSoundFileURLCache;	// IMP=0x0040000000098f2b
- (_Bool)_downloadSoundFiles:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000987e3
- (_Bool)_downloadSoundFileWithURL:(id)arg1 name:(id)arg2 cache:(id)arg3 error:(id *)arg4;	// IMP=0x001000000009813b
- (void)run;	// IMP=0x0010000000097ea1

@end

