/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "CNFSoundPlayerDelegateProtocol-Protocol.h"

@class CNFAudioPlayer, CNFConferenceController;

@interface MPConferenceManager : NSObject //<CNFSoundPlayerDelegateProtocol>
{
    CNFConferenceController *_conferenceController;
    unsigned int _chatState;
    //id <SBUIUserAgent> _sbUserAgent;
    CNFAudioPlayer *_player;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
@property(readonly) CNFConferenceController *conferenceController;
- (BOOL)faceTimeInvitationExists;
- (BOOL)inFaceTime;
- (void)endConference;
- (void)_handleInvitation:(id)arg1;
- (void)_conferenceCapabilityChanged:(id)arg1;
- (void)_conferenceStateChanged:(id)arg1;
- (void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3;
- (void)audioPlayerDidStopPlaying:(id)arg1;
- (void)stopAudioPlayer;
@property(readonly) unsigned int chatState; // @synthesize chatState=_chatState;

@end

