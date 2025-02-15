//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSPlainAudioFileWriter, NSString, NSURL;

@interface CSSiriAudioMessageFile : NSObject
{
    NSString *_requestUUID;	// 8 = 0x8
    NSURL *_recordedAudioFileURL;	// 16 = 0x10
    CSPlainAudioFileWriter *_audioFileWriter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000fd2e4
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) NSURL *recordedAudioFileURL; // @synthesize recordedAudioFileURL=_recordedAudioFileURL;
@property(retain, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
- (void)_removeRecordedAudio;	// IMP=0x00100000000fd034
- (void)dealloc;	// IMP=0x00100000000fcff6
- (void)endAudio;	// IMP=0x00100000000fcfc4
- (void)appendAudioChunk:(id)arg1;	// IMP=0x00100000000fcf25
- (void)prepareFile;	// IMP=0x00100000000fccbe
- (id)initWithRequestUUID:(id)arg1;	// IMP=0x00100000000fcc53

@end

