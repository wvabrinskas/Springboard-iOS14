/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXContainerServices.framework/AXContainerServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AXUIClient;

@interface AXContainerManager : NSObject {

	AXUIClient* _containerServerClient;

}

@property (nonatomic,retain) AXUIClient * containerServerClient;              //@synthesize containerServerClient=_containerServerClient - In the implementation block
+(id)sharedManager;
-(AXUIClient *)containerServerClient;
-(void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContainerServerClient:(AXUIClient *)arg1 ;
@end

