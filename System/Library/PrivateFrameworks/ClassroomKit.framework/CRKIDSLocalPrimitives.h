/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol CRKIDSLocalPrimitives
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@required
-(NSDictionary *)debugInfo;
-(id)listenForMessageSendsWithHandler:(/*^block*/id)arg1;
-(BOOL)sendMessage:(id)arg1 toDestinationAddress:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
-(id)accountForSourceAppleID:(id)arg1;
-(id)listenForMessageReceivesWithHandler:(/*^block*/id)arg1;
-(id)listenForAccountAdditionsWithHandler:(/*^block*/id)arg1;

@end
