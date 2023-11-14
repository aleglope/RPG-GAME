// Copyrigth AGonzL


#include "UI/Widget/AuraUserWidget.h"

#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}