/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MessageUI/MessageUI-Structs.h>
@class MFLock;

@interface MFWebKitMainThread : NSObject {

	CFDictionaryRef _visibleDict;
	MFLock* _visibleDictLock;

}
+(id)sharedInstance;
-(int)dictValueForMimeType:(id)arg1 ;
-(id)init;
-(void)_mainThreadPopulateDictForMimeType:(id)arg1 ;
-(void)dealloc;
@end
