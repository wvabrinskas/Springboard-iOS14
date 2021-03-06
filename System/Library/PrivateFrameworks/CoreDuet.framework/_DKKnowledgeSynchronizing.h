/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeSynchronizing
@required
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3;
-(BOOL)deleteRemoteState:(id*)arg1;
-(id)deviceUUID;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)synchronizeWithError:(id*)arg1;
-(id)sourceDeviceIdentityWithError:(id*)arg1;

@end

