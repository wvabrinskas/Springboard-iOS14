/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NTKComplicationStoreClient <NSObject>
@required
-(void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg1 complicationDescriptors:(id)arg2 seqId:(id)arg3;
-(void)updateLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 descriptor:(id)arg3 family:(long long)arg4 seqId:(id)arg5;
-(void)updateComplicationDescriptors:(id)arg1 forClientIdentifier:(id)arg2 seqId:(id)arg3;
-(void)removeComplicationSampleTemplatesForClientIdentifier:(id)arg1 descriptor:(id)arg2 seqId:(id)arg3;

@end
