/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TIResponseKitTrainer.h>

@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>
+(id)sharedTrainer;
-(id)_init;
-(void)performTrainingForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg1 toDestination:(id)arg2 error:(id*)arg3 ;
@end

