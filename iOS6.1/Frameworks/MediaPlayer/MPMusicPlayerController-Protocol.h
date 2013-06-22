/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol MPMusicPlayerController

@optional
- (void)pauseWithFadeoutDuration:(id)arg1;
- (void)setCurrentPlaybackRate:(id)arg1;
- (id)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(id)arg1;
- (id)currentPlaybackTime;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)setCurrentChapterIndex:(id)arg1;
- (id)currentChapterIndex;
- (void)skipToPreviousChapter;
- (void)skipToNextChapter;
- (id)skipInDirection:(id)arg1;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)stop;
- (void)pause;
- (void)shuffle;
- (void)play;
- (void)prepareToPlay;
- (id)isNowPlayingItemFromGeniusMix;
- (id)unshuffledIndexOfNowPlayingItem;
- (id)indexOfNowPlayingItem;
- (id)nowPlayingItem;
- (void)setNowPlayingItem:(id)arg1;
- (id)playbackSpeed;
- (void)setPlaybackSpeed:(id)arg1;
- (void)setShuffleMode:(id)arg1;
- (id)shuffleMode;
- (void)setRepeatMode:(id)arg1;
- (id)repeatMode;
- (id)numberOfItems;
- (id)playbackState;
- (id)allowsRemoteUIAccess;
- (void)setAllowsRemoteUIAccess:(id)arg1;
- (void)setUseApplicationSpecificQueue:(id)arg1;
- (void)prepareQueueForPlayback;
- (id)nowPlayingItemAtIndex:(id)arg1;
- (id)queueAsQuery;
- (void)playItem:(id)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (id)setQueueWithSeedItems:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setQueueWithQuery:(id)arg1;
- (id)isGeniusAvailableForSeedItems:(id)arg1;
- (id)isGeniusAvailable;
- (void)registerForServerDiedNotifications;
- (id)serverIsAlive;
@end
