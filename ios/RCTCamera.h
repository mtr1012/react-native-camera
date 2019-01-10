#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CameraFocusSquare.h"

@class RCTCameraManager;

@interface RCTCamera : UIView
@property (assign, nonatomic) CGFloat zoom;
- (void)updateZoom;
- (id)initWithManager:(RCTCameraManager*)manager bridge:(RCTBridge *)bridge;

@end
